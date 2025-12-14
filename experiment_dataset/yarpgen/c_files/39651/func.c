/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39651
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
    var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(var_15)))) ? ((+(((/* implicit */int) (signed char)80)))) : (((/* implicit */int) var_4)))), (var_7)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (signed char)60);
                var_18 = (!((!(((/* implicit */_Bool) arr_4 [i_1])))));
                var_19 = ((/* implicit */signed char) (((~(((((/* implicit */int) (signed char)-61)) ^ (((/* implicit */int) (signed char)106)))))) - (((/* implicit */int) (short)16384))));
                var_20 += ((/* implicit */signed char) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                var_21 = arr_2 [6ULL] [i_2];
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [(signed char)20]) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (unsigned char)229))))) ? (((/* implicit */int) ((signed char) var_3))) : ((~(((/* implicit */int) arr_18 [i_3]))))))) ? ((-(((/* implicit */int) (unsigned char)215)))) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-80)), (var_6))))))));
                            var_22 = ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) (short)-16385)));
                        }
                    } 
                } 
                var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) arr_18 [i_2])))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)16374))))) ? (((/* implicit */int) ((7402727447396533920LL) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))) : ((~(((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)-60))))))));
            }
        } 
    } 
}
