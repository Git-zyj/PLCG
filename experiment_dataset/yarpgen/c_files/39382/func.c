/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39382
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)59847)) : (((/* implicit */int) (short)-32760)))))) - ((~((+(((/* implicit */int) (short)11604))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (unsigned char)206))))) || (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-605366758))))))), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)43)) < (((/* implicit */int) var_1)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1])), ((unsigned short)11648)))))), (max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-15301))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((min((((var_2) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32760)) | (((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) var_2))))), (((((/* implicit */int) (unsigned char)214)) * (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            arr_15 [i_2] [i_3 + 4] = var_7;
            arr_16 [i_3] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) (unsigned char)169)) ? (111362980U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-86)) ^ (((/* implicit */int) arr_13 [i_2]))))) ? (((/* implicit */int) min((arr_2 [i_2 - 3]), (((/* implicit */signed char) var_11))))) : ((((_Bool)0) ? (((/* implicit */int) (short)128)) : (((/* implicit */int) (unsigned short)59847)))))))));
            arr_17 [i_2] = ((/* implicit */signed char) 1638170790);
        }
        arr_18 [i_2] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)24)))), (((/* implicit */int) max((var_15), (((/* implicit */short) (unsigned char)47)))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_30 [i_6] = ((/* implicit */unsigned short) (unsigned char)206);
                                arr_31 [i_2 - 3] [i_6] [i_5] [i_5] [i_5] = var_16;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_36 [i_4] [i_4] [i_5] [i_8 + 3] [i_2] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) max(((signed char)-123), (((/* implicit */signed char) (_Bool)1))))), (var_14))))));
                                arr_37 [i_8] [i_4] [i_8] = ((/* implicit */_Bool) 9044999735849628925LL);
                                arr_38 [i_8] = ((/* implicit */int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) (short)128)) ? (-616653867) : (((/* implicit */int) arr_24 [i_4] [i_5] [i_9])))), (((/* implicit */int) arr_26 [i_2 + 2] [i_2] [i_2 + 2] [i_9] [i_9]))))), (min((min((((/* implicit */long long int) (unsigned short)43713)), (9044999735849628910LL))), (((/* implicit */long long int) arr_24 [i_2 - 3] [i_8] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)255)), ((short)13676)));
}
