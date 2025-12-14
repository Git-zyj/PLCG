/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20446
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1 + 1] [i_2] = max((((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_4)))))), (var_2));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0]) + (arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0])) ? (arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_0]) : (arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0]))) : (min((arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_0]), (((/* implicit */unsigned int) var_5)))))))));
                    arr_10 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1 - 1])))), (((((/* implicit */_Bool) -4163226150016182450LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21504)) && (((/* implicit */_Bool) 3191846138U))))) : (((/* implicit */int) (unsigned short)57191))))));
                }
            } 
        } 
        var_14 = ((unsigned int) (~(arr_7 [i_0] [i_0] [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
            {
                for (long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    {
                        arr_17 [i_3] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_14 [i_0] [i_3] [i_4 + 1] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(9007199254675456ULL))) >= (((/* implicit */unsigned long long int) (-(var_0)))))))) : ((~(arr_13 [i_5 - 2] [i_4 - 1])))));
                        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_3]))));
                        arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_4 - 1] [i_5] [i_5])), (var_1)))) ? (max((-4163226150016182450LL), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_5] [i_5 + 2]))) & (arr_12 [i_4 - 1]))))));
                    }
                } 
            } 
            var_16 = ((((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [(unsigned short)9])) ? (var_10) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_3]))))))) / (min((((/* implicit */unsigned long long int) (short)21788)), (((arr_5 [i_0] [i_3]) / (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])))))));
            arr_19 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_3] [i_3])), (-4163226150016182449LL))))));
        }
    }
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)90)), (2008646668930898584ULL)));
    var_18 = ((/* implicit */short) ((unsigned short) var_4));
    var_19 &= ((/* implicit */_Bool) ((unsigned int) (+((+(((/* implicit */int) var_11)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) * (min((max((((/* implicit */unsigned long long int) var_2)), (var_10))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) (short)21792)))))))));
}
