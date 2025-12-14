/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3197
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(-1715720904))) == (((/* implicit */int) (_Bool)0)))))) < (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (min(((+(86150938))), (((((/* implicit */_Bool) -1276028322)) ? (-187145629) : (((/* implicit */int) (unsigned short)46458)))))) : (max(((-(((/* implicit */int) (unsigned short)10357)))), (((/* implicit */int) ((((/* implicit */_Bool) -1031409084)) || (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(30786325577728LL)))) ? (((/* implicit */unsigned long long int) ((30786325577728LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19082)))))) : (((arr_3 [i_0]) << (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (unsigned short)510);
                            var_15 = max((((/* implicit */int) max(((unsigned short)57691), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7491564482256108129LL)) || (((/* implicit */_Bool) 11LL)))))))), (((((/* implicit */_Bool) min((-187145629), (((/* implicit */int) (unsigned short)65025))))) ? (187145615) : (((/* implicit */int) (_Bool)1)))));
                            var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19081))) | (arr_6 [i_0]))))), (-264474502)));
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19078))) + (arr_1 [i_3 + 1]))) / (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))) < (min((((/* implicit */unsigned long long int) var_5)), (var_0)))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_8 [(signed char)7] [i_2 + 2] [i_3]) % (((/* implicit */int) (unsigned short)25598)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */short) var_4);
    var_20 += ((/* implicit */unsigned long long int) (~(var_1)));
}
