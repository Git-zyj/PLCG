/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220149
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
    var_19 = ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((short) -9223372036854775785LL)))));
    var_21 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (short)-5134)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned char) (short)-28014)))))));
                var_22 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) min((var_15), (((/* implicit */short) var_16))))))), (((/* implicit */int) (unsigned char)0))));
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [(unsigned char)10] |= ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31169))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((unsigned long long int) (unsigned char)203)))) : ((((!((_Bool)1))) ? (((((/* implicit */_Bool) (short)31169)) ? (((/* implicit */unsigned long long int) 1531783992674230469LL)) : (arr_9 [i_3] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            arr_13 [i_0] [i_0 + 1] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (~(((6ULL) & (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_0 + 2]))) : (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) * (6595489405431453453ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (1ULL))) : ((-(arr_15 [i_4] [i_4 - 1])))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((long long int) var_7)), (((/* implicit */long long int) (!(((/* implicit */_Bool) 11851254668278098157ULL))))))))));
        var_27 = var_0;
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_28 -= ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) (unsigned char)0))))) > ((+(((/* implicit */int) var_2))))));
                        var_29 += ((/* implicit */short) (-(((unsigned long long int) 7832583877233056159LL))));
                        arr_22 [i_4] [i_4] [i_4] [i_7] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32704))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) arr_19 [i_5]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (18446744073709551615ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5434171552980069618ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : ((-9223372036854775807LL - 1LL))))) ? (arr_15 [i_4 - 1] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) 17854948774159796259ULL)) ? (9673393793379362010ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_5] [i_4 - 1] [i_5])))))));
                    }
                } 
            } 
        } 
        arr_23 [i_4] [i_4] = ((/* implicit */short) var_18);
    }
}
