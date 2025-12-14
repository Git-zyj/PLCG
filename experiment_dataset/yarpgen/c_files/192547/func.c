/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192547
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
    var_15 = min((((/* implicit */long long int) ((unsigned short) (unsigned short)248))), ((+(((var_5) - (6896616388003264884LL))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((long long int) arr_1 [i_0] [i_0])) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3703751732882054967LL))))), (arr_0 [i_0] [i_0]))))) <= (((6896616388003264884LL) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(-7LL)));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((arr_6 [i_2 + 1]) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) 3703751732882054967LL)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)14677)))))))));
                    arr_12 [i_2] [i_3] = (-(((((((/* implicit */_Bool) (unsigned short)11482)) || (((/* implicit */_Bool) (unsigned short)3720)))) ? (var_4) : (-1014120019065628345LL))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)5055)))))));
                    var_19 = ((((((/* implicit */_Bool) 6896616388003264870LL)) ? (7507361282618936116LL) : (-7405541824214590720LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)9386)) != (((/* implicit */int) ((-3799443728735792244LL) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1])))))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), ((-(var_3)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_21 *= 0LL;
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_14 [i_1] [i_5]), (var_2)))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((3799443728735792246LL), (-9160419680436376557LL)))) ? ((+(((/* implicit */int) arr_18 [i_1] [i_4] [i_5] [i_5] [i_6])))) : (((/* implicit */int) ((unsigned short) var_12))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_23 [i_1] [i_4] [i_5] [i_6] [i_4] = max((((1125899839733760LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_7]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) - (min((-1LL), (((/* implicit */long long int) var_6)))))));
                            arr_24 [i_7] [i_4] [i_5] [i_4] [i_1] = ((/* implicit */unsigned short) arr_1 [i_5] [i_6]);
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
                        }
                        var_24 = ((/* implicit */unsigned short) min((var_24), (max(((unsigned short)31342), (min((arr_13 [i_5]), ((unsigned short)18072)))))));
                        arr_26 [i_1] [i_6] [i_1] [i_1] |= ((/* implicit */unsigned short) ((long long int) arr_22 [i_6]));
                    }
                } 
            } 
        }
    }
    var_25 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) - (((((/* implicit */_Bool) -3688029931970627244LL)) ? (var_12) : (1014120019065628339LL)))));
}
