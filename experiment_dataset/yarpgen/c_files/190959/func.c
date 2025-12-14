/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190959
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)142)))))));
    var_21 = ((/* implicit */long long int) var_15);
    var_22 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (var_14)))) ? (18303903283049485439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_23 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
        var_24 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17658))) < (5458622450763002960LL)))))));
        var_25 -= ((((/* implicit */_Bool) ((long long int) 306857086))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) var_12)));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_8))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)145))))), (((((unsigned int) 67076096U)) * (min((((/* implicit */unsigned int) var_12)), (var_18)))))));
        /* LoopNest 3 */
        for (long long int i_2 = 4; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_27 &= ((/* implicit */long long int) (-2147483647 - 1));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((max(((-2147483647 - 1)), (((/* implicit */int) arr_8 [i_4])))) < (((/* implicit */int) var_11)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned short)65535))) + (((((/* implicit */int) (unsigned char)109)) & (var_19)))))) ? ((-(2147483633))) : (((/* implicit */int) ((unsigned short) (unsigned char)145))))))));
                    var_30 -= ((int) (!(((/* implicit */_Bool) (unsigned char)145))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) ((short) var_18));
    }
}
