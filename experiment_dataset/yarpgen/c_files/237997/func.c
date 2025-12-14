/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237997
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (unsigned short)57566)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) var_16))))) ? (min((var_10), ((-(-6406462027989710869LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_15)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] |= min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3073))) - (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0]))))));
                var_20 = (short)-27302;
                arr_9 [i_0] [i_0] = ((/* implicit */int) (short)3102);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_15 [i_2] [i_3] = ((/* implicit */unsigned char) max((((short) ((((/* implicit */int) (short)3122)) * (((/* implicit */int) (_Bool)1))))), ((short)4210)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-6334), (((/* implicit */short) ((((/* implicit */int) (short)5729)) >= (((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */unsigned long long int) var_7)) & (arr_13 [i_3] [i_1]))) : (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned long long int) -118222057)) : (var_1)))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (short)-1265))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) ((max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13)))))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)27302)))))));
}
