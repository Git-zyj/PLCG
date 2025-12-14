/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212994
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
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2305047867U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)));
        arr_4 [i_0] = (((+(1852931751U))) * (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 324409926)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */int) var_2);
            arr_8 [i_1] [i_1] [0ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) -324409927)))), (arr_0 [i_0]))))));
        }
        for (short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned long long int) 324409926);
            arr_12 [4ULL] [i_0] = ((/* implicit */unsigned char) (~(324409929)));
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_15 [i_0] [(unsigned short)9] [(unsigned char)9] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
            arr_16 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_13 [i_3] [8] [i_0])))))) * (((((/* implicit */_Bool) (short)-28069)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)91))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (signed char i_5 = 4; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_6] [i_5 - 4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 16518794032098934547ULL))) ? ((-(2147483648U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)62))))));
                        var_16 = ((/* implicit */short) var_8);
                    }
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [i_0])))) ? (min((((/* implicit */int) (unsigned char)255)), (-324409927))) : (((/* implicit */int) (short)(-32767 - 1))))))));
                }
            } 
        } 
    }
}
