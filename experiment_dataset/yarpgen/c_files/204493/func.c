/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204493
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = (!(((/* implicit */_Bool) 10186495143966598961ULL)));
            arr_6 [i_1] = ((/* implicit */_Bool) (~(10186495143966598961ULL)));
        }
        arr_7 [i_0] = ((/* implicit */signed char) max((max((8260248929742952654ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12202955759194031723ULL))))))), ((~(min((12202955759194031700ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_8 [i_0] = (_Bool)1;
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-8)))) << (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (10186495143966598961ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-122), (((/* implicit */signed char) (_Bool)1)))))))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 12202955759194031723ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-24))))));
                    arr_19 [i_4 + 2] [i_2] = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    arr_24 [i_2] = ((/* implicit */_Bool) 18446744073709551601ULL);
                    var_14 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)123))));
                    var_15 |= (!(((/* implicit */_Bool) (signed char)-31)));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        arr_27 [i_0] [i_2] [i_6] = (!((_Bool)1));
                        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) ((unsigned long long int) 10186495143966598963ULL)))))));
                    }
                }
                var_17 = ((((12202955759194031703ULL) % (4496476591373411594ULL))) >> (((((((/* implicit */int) (signed char)-124)) | (((/* implicit */int) (signed char)-127)))) + (182))));
                var_18 = (!(((/* implicit */_Bool) (~(17639959065332372699ULL)))));
                arr_28 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((_Bool) (signed char)100))))), (((/* implicit */int) (_Bool)0))));
            }
        }
        var_19 = (signed char)13;
    }
}
