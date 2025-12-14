/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37054
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
    var_16 = ((/* implicit */_Bool) var_4);
    var_17 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [(signed char)4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) / (((/* implicit */int) (unsigned short)57344))))), ((+(arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_5), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1] [i_3])))))) > (((((/* implicit */_Bool) var_3)) ? (7573538244342472303ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_4)))))))));
                        arr_9 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (unsigned char)6))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) var_13);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = (unsigned char)98;
        var_21 = ((/* implicit */short) arr_12 [i_4]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_12 [i_4]))))))) > ((~(((/* implicit */int) min(((unsigned char)10), (((/* implicit */unsigned char) arr_17 [i_4] [i_4])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_24 [i_8] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((min((var_0), (var_8))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)21))))));
                                var_22 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (unsigned char)249)) ? (259127460428703320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned short)65531))) * (((/* implicit */int) ((_Bool) arr_23 [(_Bool)1] [i_9] [(short)20] [(_Bool)0] [i_9]))))))));
        var_24 -= (unsigned char)42;
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (short)28697)) - (((/* implicit */int) (unsigned char)93)))) > (((/* implicit */int) (!(((/* implicit */_Bool) 4905069587739009649ULL))))))))) : ((~((-(13541674485970541966ULL)))))));
        arr_31 [i_10] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_12 [14ULL]))))));
    }
    var_26 = ((/* implicit */signed char) var_1);
}
