/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221177
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
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned short)49913)))) : (((/* implicit */int) var_1)))) << (((((/* implicit */int) var_8)) - (205)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((7784888945298316855ULL) & (((/* implicit */unsigned long long int) -2565748652911972627LL))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [10U] [(signed char)4] [(unsigned char)12] = ((/* implicit */signed char) 2147483647);
            var_21 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_1 [i_1]))))));
            arr_8 [i_0] = var_6;
        }
        for (short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((((((/* implicit */int) (short)-18131)) + (2147483647))) >> (((((/* implicit */int) (short)-18131)) + (18133))))) % ((-(((/* implicit */int) var_2))))));
                        var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)31545)) | (((/* implicit */int) var_2))))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_6 [i_4] [i_4]))))) | ((((+(arr_10 [i_4] [(short)2] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_2 + 1] [i_2 - 2]))))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((-2565748652911972650LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_2])) > (((/* implicit */int) arr_6 [i_2] [i_0])))))))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        arr_20 [6LL] [i_5] [i_2] [i_0] = ((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1]);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(_Bool)0] [(_Bool)0] [i_2 - 2])) || ((!(((/* implicit */_Bool) arr_12 [2] [i_2 - 1]))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) (-(9223372036854775793LL)));
        }
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) var_6);
                    arr_26 [7ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-18131)) ? (((((/* implicit */int) (short)13136)) % (((/* implicit */int) (short)(-32767 - 1))))) : ((+((-(((/* implicit */int) arr_1 [i_8]))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) (~(0LL)));
    var_30 += ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_14))))));
}
