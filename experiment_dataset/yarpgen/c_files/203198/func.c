/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203198
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
    var_13 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) - (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-57)) == (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(signed char)20] [0LL] [i_2])) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_3))))))) : ((-(((long long int) arr_2 [i_2] [i_2] [i_2]))))));
                    arr_11 [i_0] [i_0] [2U] = ((/* implicit */short) ((long long int) 806920740548772546ULL));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)64)) - (((/* implicit */int) (signed char)25))))));
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_4)))) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (unsigned char)44))))) : (arr_5 [i_1] [i_1] [i_1]))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_4 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) ? (arr_16 [i_1]) : (4421230075955361082ULL)));
                        arr_19 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_9 [18LL] [18LL] [i_3] [i_4])) % (((/* implicit */int) var_2)))) - (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_8)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_26 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-57))));
                            arr_27 [i_0] [i_6] [i_1] [i_3] [i_5] [i_5] [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-26))));
                            arr_28 [i_0] [i_1] [(unsigned char)8] [i_3] [i_5 + 1] [i_6] = ((/* implicit */_Bool) ((long long int) ((unsigned int) var_9)));
                            arr_29 [i_0] [i_1] [i_3] [i_6] [0ULL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [12U] [i_1]))) - (arr_5 [i_6] [i_5] [i_6])))) ? ((-(var_11))) : (((/* implicit */long long int) ((unsigned int) 1018058220U)))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_5 + 1] [14U] [i_1] [14U] = ((/* implicit */unsigned int) arr_2 [i_5 + 1] [i_5 + 1] [i_3]);
                            arr_33 [i_0] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) ((signed char) (signed char)-25));
                            arr_34 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-44)) + (2147483647))) << (((((-21LL) + (52LL))) - (31LL))))) != (((/* implicit */int) arr_12 [14U] [i_1] [i_5 + 1] [i_1]))));
                            arr_35 [i_0] [i_1] [i_3] [i_5] [i_1] = ((_Bool) ((((/* implicit */_Bool) 6077195869751614692ULL)) ? (21LL) : (((/* implicit */long long int) 881071597U))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            arr_38 [i_8] [i_8] [(signed char)13] [16LL] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)32671)))));
                            arr_39 [i_1] [i_1] [i_3] [9ULL] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-15LL) + (9LL)))) ? ((+(16LL))) : (-364622890888695913LL)));
                        }
                    }
                }
                arr_40 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            {
                arr_45 [i_9] [i_10 + 1] = ((/* implicit */unsigned char) (signed char)-56);
                arr_46 [i_9] = ((/* implicit */long long int) min((((/* implicit */int) arr_43 [i_9])), (((((/* implicit */int) (unsigned short)65532)) % (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
