/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25885
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
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) -3989381942071682670LL);
                                var_19 = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_0] = ((/* implicit */int) (~(arr_1 [i_0 - 2])));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) ^ ((~(max((((/* implicit */unsigned long long int) arr_16 [6LL])), (var_3)))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        arr_24 [i_7] [i_6] = ((/* implicit */long long int) (((+((-(((/* implicit */int) (unsigned short)34686)))))) * ((+(((/* implicit */int) arr_16 [i_5]))))));
                        var_22 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)17))));
                        var_23 = ((/* implicit */unsigned char) min((arr_20 [i_6] [i_5]), (((/* implicit */unsigned short) arr_18 [i_5]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) var_17);
            arr_25 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) var_17)), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)63476)) != (((/* implicit */int) (unsigned char)158))))) * (((((/* implicit */int) (unsigned char)97)) << (((1384411955895340503LL) - (1384411955895340486LL)))))))));
        }
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */unsigned long long int) 783501002)) > (10585797514594109769ULL)))))))))));
        var_26 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -19416598)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) : (var_7))) & (((/* implicit */long long int) (~(arr_21 [i_5])))))) > (((((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5]))) : (arr_15 [i_5] [i_5]))) * (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))));
    }
    var_27 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)9878)) : (((/* implicit */int) var_15))))))));
}
