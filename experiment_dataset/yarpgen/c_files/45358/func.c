/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45358
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1 + 1] [(signed char)1] [i_0])) ? (((/* implicit */int) (unsigned short)38947)) : (arr_4 [i_1 - 4] [i_1 - 4] [5]))) <= (min((((/* implicit */int) arr_1 [i_0] [i_0])), (1802437711)))))) > (((/* implicit */int) ((short) ((short) arr_2 [i_0] [i_0] [i_1 + 1]))))));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) max((((short) (unsigned short)38947)), (((/* implicit */short) ((signed char) (unsigned short)1188)))))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)-62))) <= (max((((/* implicit */int) arr_1 [i_0] [i_1 - 3])), (var_10)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (min((((((/* implicit */int) ((((/* implicit */int) (signed char)73)) > (((/* implicit */int) arr_9 [i_2] [i_3]))))) ^ (((int) arr_6 [i_3] [i_3])))), (((/* implicit */int) min((min(((unsigned short)38957), (arr_10 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned short) ((signed char) 1802437692))))))))));
                arr_11 [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_8 [i_2] [i_3])) > (((/* implicit */int) arr_6 [i_3] [i_3])))))) ? (((((((/* implicit */int) var_5)) & (100682070))) % (((857300113) - (var_4))))) : (((/* implicit */int) ((((((/* implicit */int) arr_9 [i_2] [i_3])) / (((/* implicit */int) (unsigned short)53883)))) <= (((((/* implicit */int) (unsigned short)26575)) - (var_6))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((int) ((((var_3) - (((/* implicit */int) (unsigned short)20636)))) ^ (((/* implicit */int) ((-464853137) > (((/* implicit */int) var_5)))))))))));
    var_15 += ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) << (((((/* implicit */int) var_7)) + (18709)))))) ? (((595009495) << (((((/* implicit */int) var_0)) - (62))))) : (((((/* implicit */int) var_2)) & (var_6))))) < (((max((595009495), (((/* implicit */int) var_8)))) | (((/* implicit */int) ((short) 366501742)))))));
    var_16 |= ((/* implicit */signed char) ((((((/* implicit */int) ((var_6) == (var_3)))) == (((var_4) | (((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) ((((-364679382) + (2147483647))) << (((var_11) - (1048279262)))))) ? (((/* implicit */int) ((-338189016) <= (var_11)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-100)))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)29621)) <= (595009479))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))))));
}
