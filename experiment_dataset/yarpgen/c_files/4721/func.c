/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4721
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
    var_15 += ((/* implicit */signed char) max(((unsigned short)64601), ((unsigned short)65528)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = (_Bool)1;
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_6))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */int) -1390838593310826905LL);
                            var_18 = ((/* implicit */unsigned int) ((signed char) max((-1390838593310826905LL), (((/* implicit */long long int) var_13)))));
                            var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1843158689), (((/* implicit */int) (signed char)-62))))) ? (((/* implicit */int) (signed char)-24)) : (max((-146671204), (((/* implicit */int) var_14)))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_16 [i_5] [i_3] [7] [i_3] [i_0] = ((/* implicit */unsigned int) var_12);
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (signed char)65)))))));
                            arr_17 [i_5] [i_3] [i_3] [i_2 + 1] [i_3] [i_0] = ((/* implicit */signed char) min((((/* implicit */short) (signed char)72)), ((short)-25695)));
                        }
                        var_21 = max((((long long int) ((unsigned short) 2214253555U))), (((long long int) 5212897483444355325LL)));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (-(2147483647LL)))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] &= ((unsigned int) min((((/* implicit */short) var_5)), ((short)30299)));
        var_22 = ((/* implicit */signed char) (+(-8766556668731899504LL)));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) max((((min((-4716986213963590324LL), (-6162133878407558376LL))) / (((/* implicit */long long int) -1713446752)))), (614677500533893777LL)));
        var_24 *= ((/* implicit */unsigned int) -1721633515528179452LL);
    }
    var_25 = ((/* implicit */signed char) ((_Bool) var_1));
}
