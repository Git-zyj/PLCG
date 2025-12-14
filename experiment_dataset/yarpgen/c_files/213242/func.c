/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213242
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
    var_20 = ((/* implicit */short) ((unsigned char) ((unsigned short) ((_Bool) var_0))));
    var_21 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)108)) : (((((/* implicit */_Bool) 2830439009U)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (short)5720))))))) : (((((/* implicit */_Bool) (short)5)) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (-2959023805561169878LL) : (((/* implicit */long long int) 3988480301U)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) ((_Bool) ((_Bool) var_13))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((_Bool) ((_Bool) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5130771942429030332LL))))))));
                    arr_9 [i_1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7768)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (short)-13))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_2])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_24 -= ((((/* implicit */_Bool) ((int) -1))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (_Bool)1)) : (1550236121)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0])))) : (((arr_11 [i_4] [i_2]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)52))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2959023805561169861LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_4]))) : (var_9)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */long long int) ((((_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -2959023805561169878LL)))) : (((((/* implicit */_Bool) 4431333359343519847LL)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611686018427387903LL)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (2457428906U)))) ? (((long long int) arr_4 [i_2])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_13)))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-109))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16486))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) ((signed char) ((_Bool) (unsigned char)255))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) (signed char)52)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)47250))))))));
}
