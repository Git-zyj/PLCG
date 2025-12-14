/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233304
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
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-46)) && (((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_8))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)255))))) ^ (((((((/* implicit */int) var_9)) == (((/* implicit */int) var_3)))) ? (min((6509647062189921098ULL), (((/* implicit */unsigned long long int) (unsigned char)3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 4]))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) var_12))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-56)))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((max((arr_4 [i_0 - 4] [i_1]), (((/* implicit */unsigned long long int) var_1)))) | (((arr_5 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
            var_21 ^= ((/* implicit */unsigned short) min((arr_5 [i_1]), (((((unsigned long long int) arr_0 [5])) + (((unsigned long long int) var_6))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_22 = ((/* implicit */signed char) ((int) arr_7 [i_0] [i_2 - 1] [(unsigned char)9]));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_10))));
            arr_10 [i_0] = ((/* implicit */unsigned long long int) (~(2584853489U)));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(7933450150044296341LL)))) >= (11937097011519630517ULL))))));
        }
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)17));
                            arr_22 [i_0] [(unsigned char)9] [i_0] [(unsigned char)9] [i_4] [i_5] [(unsigned char)9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)137)) ? (2837550220726345194LL) : (var_12))), (((/* implicit */long long int) ((unsigned int) arr_14 [i_0 - 3])))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((var_4), (((long long int) (short)-25561)))))));
            var_27 = ((/* implicit */short) ((-1258387822) <= (min((((/* implicit */int) (signed char)-1)), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)141))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                for (long long int i_8 = 3; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_28 &= ((/* implicit */unsigned long long int) 4286878376U);
                        var_29 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_7])) - (((/* implicit */int) arr_15 [i_7])))))));
                        arr_29 [i_0] [i_7] [i_3 + 1] [i_0] = ((/* implicit */short) (~(max((((/* implicit */long long int) var_13)), (var_6)))));
                    }
                } 
            } 
        }
        var_30 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_18 [i_0 - 4] [i_0] [i_0 - 1] [i_0]))), (((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (5789932383910268867LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    }
    var_31 ^= ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_8)) > (-2040398164)))), (min((var_3), (((/* implicit */unsigned char) var_11))))))), (max((((((/* implicit */_Bool) var_7)) ? (var_4) : (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
}
