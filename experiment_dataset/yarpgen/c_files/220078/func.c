/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220078
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_10)))))) ? (((((/* implicit */_Bool) (unsigned short)36102)) ? (12933152110026373069ULL) : (5513591963683178548ULL))) : (((((/* implicit */_Bool) 12933152110026373086ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 555499972)))) : (((12933152110026373065ULL) >> (((12933152110026373077ULL) - (12933152110026373021ULL)))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5)))) ? (((((/* implicit */_Bool) (unsigned short)60006)) ? (-5813668657098046445LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26660))))) : (min((((/* implicit */long long int) var_2)), (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)183)) : (-555499984)))) >= ((-(var_16))))))) : (var_17)));
    var_21 = ((/* implicit */unsigned char) ((long long int) 2117286446U));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_8 [10LL] [i_0] [10LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((var_18) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((unsigned int) ((int) var_12)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_6) : (var_18)))) ? (((/* implicit */long long int) ((unsigned int) var_2))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_18)))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_0)) - (83)))))), ((-(var_6)))))));
                            var_22 = ((/* implicit */signed char) max((min((((unsigned int) 1081034521)), ((+(var_2))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                            var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_17))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_2)) != (var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_6)))) && (((/* implicit */_Bool) var_4)))))) : (min((((/* implicit */long long int) ((_Bool) var_18))), (max((var_6), (((/* implicit */long long int) var_3))))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(494405139017902125ULL))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    var_27 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) : (12933152110026373077ULL))) : (((/* implicit */unsigned long long int) ((var_18) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12933152110026373098ULL)) ? (7585117919049948839LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))))))));
}
