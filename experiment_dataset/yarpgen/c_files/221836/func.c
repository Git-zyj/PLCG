/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221836
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (((+(var_4))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2360945440629793545LL)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned short)4908))))))))))))));
            var_17 = ((/* implicit */unsigned short) var_13);
            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) <= (((((/* implicit */_Bool) 341971437)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55628))) : (arr_2 [i_0]))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16478)) ? (((/* implicit */int) (unsigned short)55608)) : (((/* implicit */int) (short)23932)))))));
                            var_19 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) -1073741824)) : (arr_2 [i_0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2044783535)) ? (2041096576U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                            var_20 = ((/* implicit */int) ((unsigned long long int) (short)-23933));
                            var_21 = (+(((((/* implicit */_Bool) var_4)) ? ((+(2041096566U))) : (((/* implicit */unsigned int) min((var_7), (-2147483622)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)20366)), ((unsigned short)9927))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32748)) - (((/* implicit */int) arr_11 [i_0 + 1] [(signed char)20] [i_5] [i_5] [i_5]))))) : (((var_2) & (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))));
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(-1073741804)))) || (((/* implicit */_Bool) var_10)))))));
            arr_18 [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) - (arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) + (197011348)))), ((-(var_10)))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 22; i_7 += 1) 
            {
                var_23 = arr_19 [i_7 - 1];
                var_24 = ((/* implicit */short) var_4);
            }
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6] [i_0] [i_0])) && (((/* implicit */_Bool) (short)-23922)))))) : (((long long int) arr_1 [i_0] [(signed char)15]))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        arr_35 [i_10] [i_9] [i_0] [i_0] [(unsigned char)9] = (~(arr_12 [i_0] [i_0] [i_8 - 2] [i_9] [i_9] [i_10]));
                        var_25 = ((/* implicit */unsigned short) (~(var_5)));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) arr_26 [i_0]));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
                    {
                        {
                            arr_47 [i_0] [i_8] [i_8] [i_12] [i_0] = ((/* implicit */unsigned char) var_12);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1))));
                            var_28 += ((/* implicit */_Bool) ((short) (_Bool)0));
                        }
                    } 
                } 
            } 
        }
        var_29 = (+(2274947094U));
        arr_48 [i_0] = ((/* implicit */unsigned int) (unsigned char)148);
        var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2253870720U)) ? (arr_29 [13U] [i_0] [i_0]) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_49 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) var_15))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_33 [14U] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        arr_52 [i_14] [i_14] = ((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14] [(unsigned char)22]);
        arr_53 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 404506058U))));
    }
    /* LoopSeq 1 */
    for (int i_15 = 0; i_15 < 16; i_15 += 4) 
    {
        var_31 = ((/* implicit */int) var_4);
        arr_57 [i_15] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)31)) && (((/* implicit */_Bool) ((unsigned long long int) var_15))))))));
    }
    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_3))));
}
