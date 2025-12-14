/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4006
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_5)))))));
    var_12 = (+((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((unsigned int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
        arr_5 [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) arr_8 [i_2] [i_2]);
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((int) arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_3 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) arr_3 [i_2])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_1)) : (2785406885669784667ULL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 8; i_3 += 1) 
        {
            arr_13 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2] [i_3])) % (((/* implicit */int) var_2))))) : (var_10)));
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
            {
                arr_17 [i_2] [i_3 - 3] [i_4] [i_2] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned short)53306)) : (((/* implicit */int) var_0))))) == ((+(arr_16 [i_4] [i_3 + 2] [i_2]))));
                arr_18 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_5);
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            arr_24 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) * (var_1)));
                            arr_25 [i_2] [i_5] [i_6] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_16 [i_3 - 4] [i_4] [i_5])))) ? (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2])) == (((/* implicit */int) (signed char)79))))))));
                            arr_26 [i_6] [i_5] [i_4 - 1] [i_5] [i_3] [i_3] [i_2] = ((/* implicit */short) (-(arr_16 [i_3] [i_3 + 2] [i_3])));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4 + 1]))));
            }
            for (signed char i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
            {
                arr_31 [i_7] [i_7] [i_7] [i_2] = ((/* implicit */long long int) var_2);
                arr_32 [i_7] = ((/* implicit */int) (short)(-32767 - 1));
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) var_10);
                        arr_40 [i_8] [i_7] [i_7] [i_8] [i_8] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0)))))) : (((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        arr_41 [i_9] [i_8] [i_7] [i_7] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_15 [i_3 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))));
                    }
                    arr_42 [i_7] [i_7] [i_3] [i_7] = arr_39 [i_2] [i_2] [i_7] [i_2] [i_2] [i_2];
                }
                for (short i_10 = 2; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_18 = arr_36 [i_2] [i_7] [i_2];
                    var_19 = ((/* implicit */long long int) (-(arr_27 [i_7 + 1] [i_10 + 1])));
                }
                for (short i_11 = 2; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    arr_47 [i_2] [i_3 - 4] [i_7] [i_7] [i_11] [i_11] = ((/* implicit */signed char) ((((_Bool) arr_46 [i_7] [i_7] [i_11])) ? (arr_15 [i_2]) : (0LL)));
                    arr_48 [i_7] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                    var_20 = ((/* implicit */int) (_Bool)1);
                }
                arr_49 [i_7] [i_3] [i_7] = ((/* implicit */long long int) 17079069324088337817ULL);
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_52 [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [i_12])))) || (((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (signed char)82))))))))) < (((2785406885669784667ULL) >> (((((((/* implicit */_Bool) 2785406885669784667ULL)) ? (((/* implicit */int) arr_7 [i_12])) : (((/* implicit */int) arr_7 [i_2])))) - (188)))))));
            arr_53 [i_2] [i_12] [i_12] = ((/* implicit */int) var_1);
        }
        var_21 = arr_28 [i_2] [0];
        var_22 = ((/* implicit */unsigned int) arr_33 [i_2] [i_2] [i_2] [6LL] [i_2] [i_2]);
    }
}
