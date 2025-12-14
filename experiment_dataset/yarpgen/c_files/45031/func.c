/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45031
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
    var_17 = ((/* implicit */_Bool) var_8);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)0)))))))) & (min(((~(4294967295U))), (((/* implicit */unsigned int) var_2)))))))));
    var_19 &= ((/* implicit */signed char) ((int) var_11));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = arr_1 [i_0 - 1] [i_0 - 1];
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 1])))) ? (((arr_1 [i_0 + 1] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_7 [i_0 + 2] [(signed char)2])))))));
                    var_20 = ((/* implicit */_Bool) min((arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2]), (min((((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 1])), (arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2])))));
                    var_21 = ((/* implicit */int) arr_2 [i_0]);
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) (+(17861384745406610102ULL))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_22 += ((/* implicit */_Bool) var_12);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */int) max((arr_14 [i_0 - 1]), (arr_14 [i_0 + 2])))), (((((/* implicit */_Bool) arr_14 [i_0 + 2])) ? (((/* implicit */int) (short)-29863)) : (((/* implicit */int) arr_14 [i_0 + 2])))))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1])) << (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)29863))))) : (((/* implicit */int) ((_Bool) (+(4294967295U)))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
        var_25 = ((/* implicit */short) max(((~(((/* implicit */int) arr_17 [i_4])))), (((/* implicit */int) arr_17 [i_4]))));
    }
    for (int i_5 = 4; i_5 < 22; i_5 += 3) 
    {
        var_26 += ((/* implicit */short) ((max((((/* implicit */unsigned int) ((int) (signed char)-1))), (((((/* implicit */_Bool) -1918316294)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2863629352U))))) >> (((max(((~(arr_21 [i_5] [i_5]))), (((/* implicit */unsigned int) (!((_Bool)0)))))) - (2177285326U)))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                for (short i_8 = 4; i_8 < 23; i_8 += 3) 
                {
                    {
                        arr_35 [i_5] [i_5] [i_7 + 1] [i_8] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_14)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) 1191959005);
                            var_28 -= ((/* implicit */unsigned short) arr_23 [i_6]);
                        }
                    }
                } 
            } 
        } 
    }
}
