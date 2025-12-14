/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3464
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((long long int) ((unsigned long long int) ((1761647067) + (((/* implicit */int) (unsigned char)49)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(max((((int) arr_0 [i_0])), (((/* implicit */int) ((unsigned short) (unsigned short)52624))))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-90)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 237120121))))))) ? ((+((~(((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)52610))))))));
        var_14 = ((/* implicit */int) arr_2 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            {
                                var_15 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7887))))) ? (((((/* implicit */int) (unsigned char)46)) << (((/* implicit */int) var_10)))) : (arr_14 [i_1] [i_5])))), (((((/* implicit */_Bool) arr_12 [8LL] [i_3 + 2] [i_3 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_8 [i_3] [i_3 + 2] [i_3] [i_3 + 1]))));
                                arr_16 [i_2] = ((/* implicit */long long int) (unsigned short)52622);
                                var_16 = ((/* implicit */int) var_10);
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned char)229)), (var_1)))))) ? ((-(min((-2454874444732588042LL), (((/* implicit */long long int) 1039914859)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((-1728260707), (var_1)))) || (((/* implicit */_Bool) 1728260702))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */long long int) (-(max((var_1), ((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))))));
        var_18 = ((/* implicit */int) 17616791613894422259ULL);
    }
    for (int i_6 = 3; i_6 < 24; i_6 += 4) 
    {
        var_19 = -7641856124341354466LL;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_7])))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_7 [i_6] [(short)19] [i_8])))), (((/* implicit */int) arr_18 [i_6 - 3]))))) ? (max((((((/* implicit */_Bool) 2454874444732588033LL)) ? (((/* implicit */int) arr_9 [(short)5] [(short)5] [i_7] [i_7])) : (var_0))), ((-(((/* implicit */int) arr_25 [i_6] [i_8] [i_8 - 1] [i_6])))))) : (max((((((var_0) + (2147483647))) << (((((((/* implicit */int) var_5)) + (67))) - (8))))), (((/* implicit */int) arr_4 [i_6 + 1]))))));
                }
            } 
        } 
    }
}
