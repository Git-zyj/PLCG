/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240751
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))), (((signed char) max((arr_2 [i_0]), (((/* implicit */short) arr_0 [15])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1577961367)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13))))))) < (((((/* implicit */_Bool) arr_15 [i_4 - 1] [(unsigned char)14] [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))));
                                arr_17 [(unsigned char)24] [(short)23] [(unsigned short)22] [i_3] [(unsigned short)19] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1729382256910270464LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4 + 3] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)54995)) : (1416597569)))) : (9211952786129796168LL)));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)15713)) - (15695)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(546966780U))) : (((((/* implicit */_Bool) arr_16 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0 - 1]))) : (arr_12 [i_0] [10U] [i_0 - 1] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_1 - 2]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-13)), (546966780U)))) : (min((((/* implicit */unsigned long long int) (signed char)-60)), (6004997886373503408ULL)))))));
                    arr_18 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_1] [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (arr_16 [i_5] [(unsigned short)8]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_2), (((/* implicit */short) arr_10 [i_6])))))))))))));
                    arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (short)-9635);
                    arr_25 [i_0] [i_0 + 1] [i_5] [(short)11] = ((/* implicit */unsigned char) (-((((((_Bool)1) ? (((/* implicit */int) (short)12017)) : (var_3))) | (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (unsigned short)49814)) : (((/* implicit */int) var_17))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (signed char)23)))));
                                arr_32 [i_6 - 4] [i_5] [i_6] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5]))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (+(arr_7 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(min((arr_1 [i_6]), (((/* implicit */int) (signed char)-60))))))) : ((-(min((((/* implicit */unsigned long long int) arr_11 [(signed char)5] [i_7] [i_0])), (arr_16 [(unsigned short)20] [i_8])))))));
                            }
                        } 
                    } 
                    arr_33 [i_5] = ((/* implicit */int) arr_5 [i_0] [i_6] [i_6]);
                }
            } 
        } 
    }
}
