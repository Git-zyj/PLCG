/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189963
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(arr_2 [i_0 + 1])))) <= (min((1078933468U), (((/* implicit */unsigned int) (unsigned short)3))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65508)) ? (var_11) : (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) (unsigned short)2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)28))))) : (min((max((10438962474364941499ULL), (((/* implicit */unsigned long long int) -1871999989)))), (((/* implicit */unsigned long long int) ((_Bool) 6734463090921084808ULL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_16 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [9LL] [(_Bool)1]), (((/* implicit */long long int) (unsigned short)4))))) ? (((unsigned int) (unsigned char)114)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)114)))))))) > ((~(min((((/* implicit */long long int) (unsigned short)65532)), (-1741773699958131194LL)))))));
                    var_18 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */int) arr_9 [i_2])), (((((/* implicit */_Bool) 8007781599344610117ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)10392)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_19 = min((((/* implicit */long long int) ((unsigned int) (unsigned short)55136))), ((-(((long long int) var_8)))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_25 [i_6] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6]))))), ((-(((/* implicit */int) (signed char)-39)))))) | (arr_19 [1] [i_6] [i_6])));
                            arr_26 [i_5] [i_5] [i_6] [6] [i_5] = ((/* implicit */unsigned long long int) (+((-(var_11)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2357219778491278671LL)), (11712280982788466823ULL)))))))));
}
