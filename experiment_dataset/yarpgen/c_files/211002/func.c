/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211002
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)0)), (var_13))))))), (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned short) min(((~(((13080093936135330230ULL) | (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (~(((var_2) & (var_14))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_9 [(unsigned char)12] [i_2 + 1] [6ULL] [(unsigned char)12] |= ((/* implicit */long long int) var_15);
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)28236)), (arr_0 [i_0]))))))))))));
                        arr_10 [i_0] [i_1 + 1] [i_3] [i_3] = ((/* implicit */_Bool) (unsigned short)29799);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-29038))));
                        var_20 = ((/* implicit */unsigned int) min((((unsigned char) 524287)), (((/* implicit */unsigned char) (((+(var_4))) >= (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)4094)) : (var_3)))))))));
                        arr_18 [i_6] [i_5] [i_5] [14] [i_5] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) arr_11 [i_0] [i_4 + 1]))), (0U)));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1])))) ? (var_13) : (((/* implicit */int) arr_13 [(unsigned short)6] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
        var_22 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
    }
}
