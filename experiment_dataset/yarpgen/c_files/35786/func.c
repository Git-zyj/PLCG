/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35786
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)13276)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) (-((+(((((/* implicit */int) (unsigned short)8128)) >> (((((/* implicit */int) arr_1 [i_0])) + (91)))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_13))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) >> (((((var_9) - (((/* implicit */int) arr_0 [i_0] [i_0])))) - (1590335230)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_13))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) >> (((((((var_9) - (((/* implicit */int) arr_0 [i_0] [i_0])))) - (1590335230))) - (12083))))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = (-(((/* implicit */int) min((var_5), (((/* implicit */short) arr_6 [i_1 + 2]))))));
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((20U), (((/* implicit */unsigned int) (unsigned char)190))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), ((+(max((((/* implicit */unsigned long long int) var_6)), (0ULL)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-48)) / (1493541161)))))))))));
                        var_22 *= ((/* implicit */unsigned char) min(((-(-5632824275833009392LL))), (((/* implicit */long long int) min(((short)-13276), (((/* implicit */short) (signed char)-81)))))));
                    }
                } 
            } 
        } 
        arr_22 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_20 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */short) (signed char)102))))) / (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-13268))))));
    }
    var_23 = ((/* implicit */short) var_11);
}
