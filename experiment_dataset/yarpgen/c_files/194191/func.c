/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194191
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned char)31))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((min((var_13), (((/* implicit */unsigned int) (short)-1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 3]))) : (((((/* implicit */_Bool) (-(4749205761333638222LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 3] [i_2 - 1]))) : (-767350495410502927LL)))));
                        var_22 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_18)) / (((/* implicit */int) var_11)))));
                        var_23 = ((/* implicit */short) -2280882980044512609LL);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_15))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        arr_25 [i_4] [i_4] [i_6] [i_6] [i_4] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_4] [i_4]), (((5678526527896094923LL) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) <= (((((/* implicit */_Bool) (short)18115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))));
                        var_25 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (34359738367LL)))), (((1ULL) & (((/* implicit */unsigned long long int) 0U)))))), (arr_24 [i_4])));
                        var_26 = ((((/* implicit */_Bool) min((arr_24 [i_4]), (arr_24 [i_4])))) ? (min((min((18446744073709551612ULL), (((/* implicit */unsigned long long int) -4749205761333638230LL)))), (((/* implicit */unsigned long long int) (short)-1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 0ULL))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) & (-2280882980044512622LL)))))))));
                        arr_26 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) var_19);
                    }
                } 
            } 
        } 
        arr_27 [i_4] = ((signed char) ((arr_24 [i_4]) % (((/* implicit */unsigned long long int) (+(7457589931459698447LL))))));
    }
    var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (unsigned char)1)), (var_19)))))) | ((~(min((-4749205761333638240LL), (((/* implicit */long long int) var_11))))))))));
    var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)32739)), (min((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 0)) : (17335957839266955749ULL))), (((/* implicit */unsigned long long int) 4486244318058358417LL))))));
    var_29 &= ((/* implicit */_Bool) var_7);
}
