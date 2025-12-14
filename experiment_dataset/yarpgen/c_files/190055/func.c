/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190055
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
    var_16 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2432504093819166086ULL)) || (((/* implicit */_Bool) 2432504093819166088ULL))))) - (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1 + 1] [i_0])))))) >= ((~(4503599627370495ULL)))));
                    var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (16014239979890385530ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (2432504093819166088ULL))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((~(4936729585380305336LL))), (((/* implicit */long long int) (unsigned char)11)))))));
                var_21 = ((/* implicit */unsigned short) arr_10 [i_4]);
            }
        } 
    } 
}
