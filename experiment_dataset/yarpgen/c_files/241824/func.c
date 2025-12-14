/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241824
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) 2900225652862874090ULL);
                                arr_15 [i_0] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (max((arr_5 [i_2] [i_2 + 2] [i_2] [i_2 + 1]), (max((((/* implicit */int) (unsigned short)65512)), (arr_5 [i_2] [i_2] [i_2] [i_2])))))));
                                arr_16 [i_0] [i_0] [7LL] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (short)5843)) >= (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_10 [i_2] [i_0])) : (((/* implicit */int) (unsigned short)24))))))) ? ((-(max((arr_3 [i_1] [i_2]), (((/* implicit */unsigned int) arr_8 [i_2] [i_4])))))) : (arr_3 [(unsigned char)8] [i_1])));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_2 + 1] [i_1] [i_2 - 3]) << (((arr_6 [i_0] [i_2 + 1]) - (17333337989302895272ULL)))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) arr_13 [i_0] [i_2 + 2])) / (((/* implicit */int) arr_13 [i_2 - 3] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (unsigned short)65512);
                                var_17 = ((/* implicit */unsigned short) arr_12 [(unsigned char)13] [(signed char)2] [i_2 + 2] [i_0] [i_6] [i_6]);
                                var_18 = arr_9 [i_2 + 1] [i_1] [i_2] [i_5] [i_1];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26548)) > (((/* implicit */int) (unsigned short)23))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (max((((/* implicit */unsigned int) arr_12 [18LL] [i_0] [i_0] [i_7] [i_7] [i_0])), (((unsigned int) (unsigned short)54682))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                var_21 = (unsigned short)65505;
                                var_22 = ((/* implicit */signed char) arr_14 [i_0] [i_8]);
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (17ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)18987)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54682)))), (max((((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))), (min((1365919609), (1365919609)))))));
}
