/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196904
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
    var_12 = ((((/* implicit */_Bool) ((long long int) 4654258637086475036LL))) ? (min((((8727373545472LL) << (0LL))), ((+(-1LL))))) : (((((/* implicit */_Bool) ((var_1) ^ (1803288504481784811LL)))) ? (((((/* implicit */_Bool) 2752798874515571078LL)) ? (-2616026527474561507LL) : (6407213014398205827LL))) : (var_7))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0LL), (5110292123600101239LL)))) ? (((arr_7 [i_3 - 1] [i_2] [i_1]) & (var_8))) : ((~(-7701415122267295441LL)))))) ? ((~((~(3269702540772158113LL))))) : ((~((~(-1LL))))));
                        var_14 = ((long long int) ((long long int) (~(83142906423973689LL))));
                        arr_10 [i_2] [i_1] [i_2] [i_3] [i_1] = 9223372036854775807LL;
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_15 = ((long long int) ((long long int) (+(0LL))));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_4])) ? (142963056292389133LL) : (var_9)))) ? (max((1LL), (0LL))) : (((long long int) 5110292123600101239LL))))) ? (max((((-5811114646061099245LL) + (var_2))), (min((arr_4 [i_0] [i_1]), (-1LL))))) : (((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0] [i_0]), (var_5)))) ? (var_2) : (((var_9) << (0LL))))));
                        var_17 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((8632667531890722852LL), (min((9223372036854775807LL), (var_10))))) : (((long long int) arr_3 [i_0] [i_2] [12LL])));
                        var_18 = (-(var_3));
                        var_19 &= min((((((5341001367567326087LL) >= (arr_3 [i_0] [i_1] [i_2]))) ? (-8LL) : (var_11))), ((-(-6246099138505325668LL))));
                    }
                    arr_13 [i_0] = ((/* implicit */long long int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (arr_8 [i_1] [i_1] [i_1]))) != (((((/* implicit */_Bool) ((((-702117955906676644LL) + (9223372036854775807LL))) << (0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-7443715517675438855LL) <= (-4397328834242122021LL))))) : (((((/* implicit */_Bool) 16LL)) ? (-103724136856268941LL) : (6LL)))))));
                    var_20 = ((/* implicit */long long int) max((var_20), ((((~(((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_0] [i_0])) ? (0LL) : (var_10))))) & (((((/* implicit */_Bool) (+(0LL)))) ? (arr_11 [i_0] [i_1] [i_1] [i_2]) : (arr_9 [i_0] [i_1] [i_0] [i_2])))))));
                }
            } 
        } 
    } 
}
