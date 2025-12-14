/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29518
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = var_11;
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) + (min((((/* implicit */unsigned long long int) (unsigned char)186)), (var_0)))))) ? (max((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1069010296)) ? (((/* implicit */int) (short)28953)) : (((/* implicit */int) var_16))))))) : (var_6)));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29092))) <= (14088229360103240562ULL)))), ((unsigned char)113)));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0 - 2] [i_1] [i_0] = ((/* implicit */long long int) var_6);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)156)) >> (((-3887391959332270533LL) + (3887391959332270533LL)))));
            arr_6 [8LL] [(short)4] [i_1] &= ((/* implicit */unsigned long long int) ((6455455916659150250LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 1187003660324247656ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-14859)))))));
            arr_7 [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    for (short i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_23 += (((_Bool)1) ? (17953255477828968801ULL) : (((/* implicit */unsigned long long int) -8803720949313593053LL)));
                            var_24 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) (signed char)-1)) ? (13568942489269311070ULL) : (((/* implicit */unsigned long long int) 3887391959332270532LL)))))), (((/* implicit */unsigned long long int) (unsigned char)135))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 1; i_5 < 7; i_5 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)246)), ((short)-8687)));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((min((((/* implicit */long long int) (signed char)18)), (4745810036055464515LL))) | (arr_20 [i_0 - 2]))))))));
                            arr_28 [i_0] [i_5] [i_0] [i_7] [i_5] = ((/* implicit */unsigned long long int) -2498884839939932787LL);
                        }
                    } 
                } 
            } 
            arr_29 [i_0] [i_0] = max(((short)-30671), (((/* implicit */short) (signed char)14)));
            var_26 |= ((/* implicit */signed char) (short)11826);
        }
        for (long long int i_9 = 1; i_9 < 7; i_9 += 1) /* same iter space */
        {
            arr_33 [8LL] |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) | (min((var_14), (((/* implicit */unsigned long long int) arr_24 [(unsigned short)2])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4745810036055464520LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_25 [i_9] [i_9] [i_0] [i_0] [i_0] [i_0]))))))))));
            var_27 = ((/* implicit */_Bool) ((-7433385880369176787LL) + (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [2LL] [i_9 + 4])))))));
        }
        var_28 |= ((/* implicit */_Bool) (unsigned short)65535);
        var_29 = (!((_Bool)1));
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (max((562949953421312ULL), (min((arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]), (arr_26 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 - 1])))))));
    }
    for (short i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1540049820)) < ((((_Bool)1) ? (9271358679554784931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)5472), (((/* implicit */unsigned short) arr_35 [i_10] [i_10]))))))))));
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (2048374817448802638LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)156))))) ? (((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) min(((unsigned short)55733), ((unsigned short)255)))) : (((((/* implicit */_Bool) (short)26644)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))))) : ((-(((/* implicit */int) ((short) 5531327882125531399ULL))))))))));
        arr_36 [i_10] = ((/* implicit */long long int) ((14328928020880714840ULL) | (((/* implicit */unsigned long long int) (~(-9223372036854775789LL))))));
    }
    for (long long int i_11 = 1; i_11 < 18; i_11 += 3) 
    {
        arr_40 [i_11] [i_11] = ((/* implicit */short) max(((_Bool)1), ((_Bool)1)));
        var_34 ^= ((/* implicit */int) ((unsigned short) (unsigned char)143));
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned long long int) (-(451146866455752181LL)));
                        var_36 |= ((/* implicit */long long int) ((12530316150956576517ULL) + (((/* implicit */unsigned long long int) 368518099511581753LL))));
                        arr_50 [6] [i_14] &= ((/* implicit */short) (signed char)82);
                        arr_51 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) arr_46 [i_12]);
                    }
                } 
            } 
        } 
        var_37 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16477422711027081034ULL))));
    }
}
