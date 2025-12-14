/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2238
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [i_1] [i_0 - 1] = ((unsigned char) arr_4 [i_0 + 1] [17LL]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((14865130589927390603ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))) : (((((/* implicit */_Bool) var_0)) ? (arr_0 [11] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 3503200094U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3))))), (max((((/* implicit */long long int) (short)-1)), (arr_3 [7LL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4311087458302129725ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (14135656615407421878ULL)))) && (((/* implicit */_Bool) -1097180810))))))));
                            arr_13 [i_0] [i_1] = ((/* implicit */signed char) -1);
                            var_19 = ((/* implicit */short) min((var_19), (((short) arr_5 [i_0 + 2] [i_1 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1097180800)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (short)32758))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) ((1308298807700019233ULL) != (var_1)))), ((-(4311087458302129737ULL))))) : (((/* implicit */unsigned long long int) ((long long int) (-(var_9))))))))));
    var_21 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (unsigned char)172)), (((((/* implicit */_Bool) 127U)) ? (4311087458302129725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    var_22 = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (3) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 14135656615407421885ULL)))))))), (var_9));
}
