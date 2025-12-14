/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222515
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1 + 2] [17ULL] = ((/* implicit */unsigned long long int) (short)13233);
                var_18 = ((/* implicit */_Bool) (unsigned short)7168);
                arr_6 [i_1] = ((/* implicit */long long int) -273558042);
                var_19 += ((/* implicit */unsigned char) var_17);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((min((273261950), (((/* implicit */int) (short)-13256)))), (((/* implicit */int) (signed char)60))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        var_21 |= ((/* implicit */unsigned char) min(((short)13246), ((short)13255)));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned char)249))) ? (((/* implicit */unsigned long long int) ((((((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_3)) - (53639)))))) : (((unsigned long long int) 3592453417U))));
                        var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)13247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13255))) : (13446581255980959561ULL)))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        arr_21 [i_2] [i_3] = ((/* implicit */unsigned char) min((18446744073709551615ULL), (1152921504606846976ULL)));
                        var_24 = ((/* implicit */long long int) min((((/* implicit */int) ((((1874854772U) + (724799847U))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-13248)))))), ((~(((/* implicit */int) (short)13247))))));
                        var_25 = ((/* implicit */unsigned long long int) ((signed char) 270505031));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13234)) ? (((/* implicit */long long int) 1056445156)) : (-2221807155555187902LL)));
                    }
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)32688)) >> (((((/* implicit */int) (short)13255)) - (13239))))) % ((-(((/* implicit */int) (short)-13256))))));
                }
            } 
        } 
    } 
}
