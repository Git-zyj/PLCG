/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29258
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
    var_18 = ((/* implicit */unsigned long long int) ((var_0) >> (((((/* implicit */int) var_16)) - (1420)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((15164087556820335914ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0 - 1])), ((unsigned short)19048)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) <= (((arr_1 [(unsigned char)13]) >> (0ULL))))))) - (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52503))) : (-1LL))))))));
                        var_20 &= ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 + 1])), (arr_8 [i_0 + 2] [i_1 + 1] [i_1] [i_3 + 3]))));
                        var_21 = ((unsigned long long int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1])) <= (((/* implicit */int) (short)18684))))))));
                        var_22 += ((/* implicit */_Bool) 255);
                    }
                } 
            } 
            arr_14 [(signed char)5] [i_0] [i_1 + 1] = -256;
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_19 [i_0] [i_1 + 1] [i_4] [17LL] [17LL] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 75549523U)), (6ULL))), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) && (((_Bool) arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1]))));
                        arr_20 [i_0 - 2] [3ULL] [i_0 - 2] [(_Bool)1] = ((/* implicit */long long int) (short)-32100);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) -1))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1])) & (((/* implicit */int) arr_5 [i_1 + 1] [13] [13])))), (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_1 + 1] [i_1])))))));
        }
        arr_21 [i_0] [11LL] = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [(signed char)8])), (arr_10 [i_0] [i_0] [i_0] [i_0])))) >> (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0 + 2] [i_0 - 1] [i_0] [13LL] [i_0 - 2] [15])) == (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_0]))))));
    }
}
