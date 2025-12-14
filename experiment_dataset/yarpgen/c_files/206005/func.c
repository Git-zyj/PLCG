/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206005
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
    var_20 = ((/* implicit */short) (((+(min((((/* implicit */long long int) var_18)), (var_5))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned char) var_3)))))));
    var_21 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_22 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((11836861254228165473ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)39098)))))) * (((/* implicit */unsigned long long int) arr_1 [i_0] [20U]))));
        var_23 = ((/* implicit */unsigned char) (!((!(((_Bool) arr_1 [i_0] [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((int) (~(((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [(short)20]);
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */unsigned int) arr_1 [(unsigned char)5] [i_2])) + (((unsigned int) ((long long int) arr_0 [i_2] [(unsigned short)18])))));
        var_24 = ((int) (!(((/* implicit */_Bool) min((arr_0 [i_2] [5]), (((/* implicit */unsigned int) arr_1 [i_2] [i_2])))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_14 [19LL] [19LL] [i_3] = ((/* implicit */int) ((arr_7 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3]))))))));
            arr_15 [i_2] [i_2] [15ULL] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~((-(arr_0 [i_2] [i_2])))))) ^ (arr_9 [i_2])));
            var_25 = max((((/* implicit */long long int) (+(((int) arr_8 [i_2] [i_3]))))), ((((-(arr_9 [5]))) % (((/* implicit */long long int) (~(arr_7 [(unsigned char)4])))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned char) arr_4 [i_5]))))));
                            var_27 = ((/* implicit */unsigned short) min(((-(((int) arr_16 [(unsigned short)12])))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))))))));
                            arr_26 [i_2] [i_6] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((int) (~(((int) arr_12 [i_2])))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) arr_18 [i_2])), (arr_16 [i_4])))))));
            var_29 += ((unsigned long long int) max((arr_9 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_4] [i_2])))))));
        }
        arr_27 [i_2] = ((/* implicit */unsigned long long int) (~(-413845277)));
        var_30 = ((/* implicit */signed char) (-(min(((-(((/* implicit */int) arr_11 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2] [(unsigned short)20] [(unsigned short)20] [i_2])))))))));
    }
}
