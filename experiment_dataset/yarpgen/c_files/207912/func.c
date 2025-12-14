/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207912
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) (unsigned short)26798);
            arr_6 [i_0] = ((/* implicit */_Bool) ((3844106114U) >> ((((~(((/* implicit */int) arr_5 [i_1] [i_1])))) + (136)))));
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5102830132532307501LL)));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) == (arr_0 [i_0])));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) (~(arr_4 [i_0] [i_2 - 1] [i_0])));
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
            var_22 ^= ((/* implicit */unsigned short) (((+(arr_1 [i_2]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9838)) ? (-5102830132532307501LL) : (-5102830132532307516LL))))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned int) (short)-26670);
        var_23 -= 11370276325977344631ULL;
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    var_24 = 63ULL;
                    arr_17 [i_0] [i_0] [i_4 - 1] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) == (5102830132532307500LL)))) << (((/* implicit */int) var_6)));
                    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-26670)) ? ((-(16392522562016660331ULL))) : (((/* implicit */unsigned long long int) -233630426))));
                }
            } 
        } 
    }
    var_26 *= ((/* implicit */unsigned long long int) var_15);
}
