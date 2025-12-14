/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235370
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((long long int) -1006269037))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)45)) > (((((/* implicit */_Bool) ((((/* implicit */int) (short)25463)) + (((/* implicit */int) (short)-25452))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((short)-25452), (((/* implicit */short) (signed char)113)))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-25464))))) - (3575759563U)))) % (max((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-25463)), ((unsigned short)53419)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29894))) + (-7919578668392067217LL)))))));
                                arr_12 [i_0] [i_0] [(_Bool)1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) > (13LL)))) % (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) + (8631219963632597242ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)90)) + (((/* implicit */int) (short)25462))))), (((10474822316005721450ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))))))), (((/* implicit */unsigned long long int) (unsigned char)14)));
}
