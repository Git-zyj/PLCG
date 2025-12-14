/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36397
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) 184344590U);
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) > (((/* implicit */int) arr_5 [11]))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) : (var_1)))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_0 + 2])), ((~(((/* implicit */int) (unsigned char)215))))));
            arr_12 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (arr_4 [i_0]))))) * (min((arr_2 [i_0]), (((/* implicit */unsigned int) (signed char)0))))))));
        }
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            arr_17 [i_3] = ((/* implicit */signed char) var_9);
            arr_18 [i_3] = ((/* implicit */short) ((max((((var_5) >> (((var_1) - (12781906944106322317ULL))))), (((var_5) << (((var_4) + (299436673))))))) + ((-(((arr_8 [i_3]) | (((/* implicit */unsigned int) var_12))))))));
            arr_19 [i_3] [i_3 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)215)) && (((/* implicit */_Bool) (unsigned char)41)))))));
            arr_20 [i_3] [i_3] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)24)), (((((/* implicit */int) (unsigned char)12)) >> (((arr_4 [i_0 + 3]) - (1823568233U)))))))) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15304045440687459785ULL))))))))));
        }
        arr_21 [(short)22] = ((/* implicit */_Bool) ((var_1) << (((((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) || (((/* implicit */_Bool) (unsigned char)215))))) - (1))))) - (2147466477)))));
        arr_22 [4] [i_0 + 2] = ((/* implicit */short) var_2);
        arr_23 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) (+(((int) ((signed char) 15304045440687459785ULL)))));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_27 [3U] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) * ((-(((/* implicit */int) (signed char)-45))))))), (((((/* implicit */unsigned long long int) ((arr_16 [0ULL] [i_4] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)16] [i_4] [i_4])))))) + (((arr_26 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25998)))))))));
        arr_28 [i_4] &= ((/* implicit */short) 16777215);
        arr_29 [i_4] = ((/* implicit */short) var_12);
        arr_30 [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (var_7) : (((/* implicit */int) (signed char)-6)))))));
        arr_31 [(short)11] = ((/* implicit */short) (!(((arr_26 [i_4]) != (arr_26 [i_4])))));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    arr_40 [(signed char)11] [i_6] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) arr_5 [11])), (arr_14 [20U]))));
                    arr_41 [9] [9] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_15 [i_7] [20ULL] [i_7])) || (((/* implicit */_Bool) max((var_7), (((/* implicit */int) (unsigned short)12174))))))), (((max((((/* implicit */unsigned long long int) var_4)), (arr_33 [i_5]))) > (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) arr_9 [i_7] [i_5] [i_5])))))))));
                    arr_42 [i_5 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_34 [i_5])), (var_9)))) ? (var_1) : (min((((/* implicit */unsigned long long int) var_0)), (var_9))))), (((/* implicit */unsigned long long int) var_7))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_5);
}
