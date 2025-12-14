/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248989
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(var_11)));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((((unsigned int) var_1)) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned char)255))))), (max((arr_1 [(unsigned char)4] [i_0]), (((/* implicit */unsigned int) var_3))))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_2]))))) >= (max((((/* implicit */unsigned long long int) var_12)), (arr_6 [i_1])))))))))));
                            var_15 -= ((unsigned short) ((((/* implicit */_Bool) (unsigned char)4)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9614)))));
                        }
                    } 
                } 
            } 
            var_16 &= ((/* implicit */unsigned long long int) (unsigned short)9601);
        }
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [3ULL] [i_1] [i_1 + 1]))) : (14951855806823624969ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 3]))) & (-3996021785312057169LL))) : ((-(arr_10 [i_1] [i_1]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1 - 4] [i_1])))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_11)))))))) & ((-(-8087687595520515764LL)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)5093)) == (((/* implicit */int) (unsigned short)55921))))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (var_9)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (unsigned char)27)))))) > (var_7))))));
    var_20 = ((/* implicit */unsigned long long int) var_0);
}
