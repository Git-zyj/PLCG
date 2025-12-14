/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244200
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
    var_13 |= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2047U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (unsigned short)32788);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)23)))))));
                        var_16 = ((/* implicit */_Bool) (~(0LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned int) (unsigned char)14);
                        arr_19 [(signed char)1] [i_5 - 1] [i_5 + 1] [i_4 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (_Bool)1))) * (((/* implicit */int) ((unsigned char) (unsigned char)232)))));
                        arr_20 [i_0] [i_4 - 1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)60)) ? (2145386496) : (((/* implicit */int) (short)14989)))) / (((/* implicit */int) (unsigned char)236))));
                    }
                } 
            } 
        } 
    }
}
