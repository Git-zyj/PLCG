/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247018
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1947734537)) ? (7662925440722463782LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))));
    var_15 = ((/* implicit */short) var_7);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_10))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) (+(((/* implicit */int) (short)30720))))) > (-8735314300436003233LL)))))));
        var_18 = ((((/* implicit */int) (signed char)-104)) == (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) != (((/* implicit */int) min(((signed char)0), ((signed char)15))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = (((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [17LL]))))) : (((long long int) (signed char)-4)));
            var_19 = ((long long int) (signed char)-16);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) 851715300984893269LL);
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 4696149261787675290ULL))))) * ((+(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_3] [i_2])) || (((/* implicit */_Bool) var_2))))))) : ((~(((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_4])))));
                    }
                } 
            } 
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-32335)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_0))))));
            var_23 ^= min(((signed char)22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)45)))))))));
        }
        for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            var_24 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)42)))))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_5 + 2] [i_5] [i_5]))))) : (min((((/* implicit */long long int) (short)768)), (-1589016594084030332LL))))))));
        }
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) var_10);
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) arr_29 [i_7] [i_7] [(unsigned char)21] [i_8] [i_9]);
                            var_29 = max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_3)), (14830770337244743355ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (((arr_21 [i_6] [i_8]) ^ (arr_21 [i_7] [i_7]))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-50))))) ? (((/* implicit */long long int) ((arr_13 [i_1]) / (((/* implicit */int) arr_5 [i_1]))))) : (((long long int) 14658595666936662564ULL))))))));
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((short)11794), ((short)-1)))) ^ (((/* implicit */int) ((unsigned short) var_3)))))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
    {
        var_32 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)0)), ((short)-25541)))), (arr_21 [i_10] [i_10])));
        /* LoopSeq 3 */
        for (long long int i_11 = 2; i_11 < 24; i_11 += 2) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_3))));
            var_34 = ((/* implicit */short) (!(arr_19 [i_10])));
            /* LoopNest 2 */
            for (long long int i_12 = 3; i_12 < 23; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    {
                        arr_42 [i_10] [(short)3] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : ((-(33554176ULL)))))));
                        var_35 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_13 [i_11 - 1])), (4696149261787675294ULL)))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(arr_30 [i_10])))))) ? (max((((/* implicit */long long int) (unsigned char)219)), (6761776385122735246LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> ((((~(arr_40 [i_10] [15U] [i_11] [15U] [i_12] [15U]))) + (8342187968178793717LL))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            var_37 += (~((~(((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14])))));
            var_38 = var_5;
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-4817)) / ((-((~(((/* implicit */int) var_2))))))));
        }
        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) ((((long long int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */long long int) min((65535U), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_12))))))))));
            var_41 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_5 [i_10])))));
        }
        var_42 ^= ((long long int) max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) -567929998611584144LL)))))));
        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)181), (((/* implicit */unsigned char) (signed char)-116))))), ((-(((/* implicit */int) (unsigned char)240))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : ((~((-(var_10)))))));
        var_44 = ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)44)))), (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
    }
    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
    {
        var_45 = ((/* implicit */_Bool) var_8);
        var_46 = ((/* implicit */short) arr_50 [i_16] [i_16]);
        var_47 &= ((/* implicit */signed char) arr_49 [0U]);
        var_48 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) (short)511)))), (((/* implicit */int) var_7))))));
        arr_51 [i_16] = ((/* implicit */signed char) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))))), (((/* implicit */int) var_11))));
    }
}
