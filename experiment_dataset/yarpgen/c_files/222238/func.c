/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222238
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_10))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (var_8)))))) | (((((/* implicit */_Bool) 3261853621886866029ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62101))))));
                            var_17 = ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_18 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_15))))), (15184890451822685587ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)0)) >> (((((/* implicit */int) max(((short)-30548), (((/* implicit */short) var_7))))) - (93))))) >> (((((((4953845403177928712LL) >> (((((/* implicit */int) (signed char)65)) - (40))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3435)) << (((2136671859943579585ULL) - (2136671859943579578ULL)))))))) - (147636004693LL)))));
                            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) <= (((((/* implicit */int) ((var_1) > (5227410590938863709ULL)))) ^ (((/* implicit */int) ((_Bool) 3261853621886866029ULL)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_6))) < (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((6452223755753970328ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) > (max((((/* implicit */unsigned long long int) var_11)), (5028394056465588558ULL)))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67)))));
    var_24 = ((/* implicit */_Bool) ((long long int) ((_Bool) ((unsigned short) var_12))));
}
