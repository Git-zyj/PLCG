/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2598
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_8 [i_3 + 1] [i_1 + 3] [i_0 + 3] [i_0])) * (var_3))) < (min((((arr_0 [i_2]) ? (var_3) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2] [i_3])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32512)))))))));
                            var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) min(((signed char)-121), (((/* implicit */signed char) (_Bool)0))))) : (((/* implicit */int) ((short) var_5)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (signed char)31)) : (452474523))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) (signed char)-122)) < (((/* implicit */int) (unsigned short)26788))));
    var_20 = ((/* implicit */short) var_2);
    var_21 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1347120687053667348LL)) ? (((/* implicit */int) (_Bool)1)) : (var_7)))))));
}
