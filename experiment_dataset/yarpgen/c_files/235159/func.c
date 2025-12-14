/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235159
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)-32191))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((((long long int) var_2)), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    var_22 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_15))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 2] [i_3 - 3] [i_0])) && (((/* implicit */_Bool) arr_7 [i_3] [i_3 + 1] [i_3 + 1] [i_0])))) && (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (signed char)10)), ((short)-19413)))))))))));
                            arr_11 [i_3] [i_3 - 1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) 1460191531));
                            var_25 ^= min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-7199044354792982566LL)))), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_2])) + (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (var_8))))))));
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 2016590484)), (arr_0 [i_3 - 2]))) * (((/* implicit */unsigned long long int) 4294967286U))))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(4296512353373845500LL))))));
                        }
                    } 
                } 
                var_27 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)237)), (max((((/* implicit */unsigned long long int) 0U)), (15277492232895114321ULL)))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_28 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_11)), (max((((unsigned long long int) (unsigned char)248)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((arr_3 [i_0] [i_5]) + (1111286688))))))))));
                            var_29 |= ((/* implicit */short) max((((((min((-7758911211359938428LL), (((/* implicit */long long int) (signed char)-71)))) + (9223372036854775807LL))) >> (0))), (((/* implicit */long long int) -1891439544))));
                            arr_18 [i_0] = arr_10 [i_0] [i_0] [i_4] [i_5];
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4241839318248762856ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned long long int) 0U)) : (var_1)))) ? (max((-11), ((-2147483647 - 1)))) : (((/* implicit */int) max((var_10), (var_13))))))));
}
