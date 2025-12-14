/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208656
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
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_10))))) | (2910605832U));
    var_18 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) + (-2553202902649748303LL)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_4 [i_3 + 3] [i_3]) >> (((2553202902649748314LL) - (2553202902649748254LL)))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 0U))));
                            var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175)))));
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_6 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) / (17304129592230405946ULL)));
                        }
                        for (unsigned char i_5 = 2; i_5 < 7; i_5 += 1) 
                        {
                            arr_15 [i_5 + 2] [5LL] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1142614481479145670ULL)) ? (arr_14 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [4ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 17304129592230405956ULL)) ? (1142614481479145670ULL) : (((/* implicit */unsigned long long int) arr_2 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4575657221408423936LL)) && (((/* implicit */_Bool) arr_10 [i_5] [i_3] [i_2] [i_1] [i_0]))))))));
                            var_23 = ((/* implicit */_Bool) (-(var_4)));
                            var_24 = ((/* implicit */unsigned char) ((791481531U) < (arr_3 [i_3 - 1])));
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) (unsigned char)0))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) var_15);
                            arr_18 [i_3] [i_1] [i_2] [(unsigned char)2] [5ULL] = 8180233012587199287ULL;
                            arr_19 [(unsigned char)4] = ((/* implicit */unsigned char) (-((+(1384361464U)))));
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_2] [i_2] [i_2] [i_6 - 2])) ? (((/* implicit */unsigned long long int) arr_14 [6U] [i_1] [i_0] [i_1] [i_1] [(unsigned char)8] [0LL])) : (((((/* implicit */_Bool) 12U)) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned long long int) -3705091349133656993LL))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_7 + 2] [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_21 [i_7 + 2] [i_7 + 2]))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [i_7 + 2])), (677602199U)))))))));
        var_29 |= ((/* implicit */unsigned int) ((arr_20 [i_7]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6759311942319165538ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) arr_21 [6U] [2U])) ^ (12108009434005012107ULL))))) : (((/* implicit */unsigned long long int) min(((~(2246840984U))), ((~(2246840984U))))))));
        var_30 |= ((/* implicit */_Bool) (+(max((3914354953033147920ULL), (((/* implicit */unsigned long long int) 2048126312U))))));
        var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2048126339U) << (((-32768LL) + (32777LL)))))) ? (((((/* implicit */_Bool) 4016071856068464708ULL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((arr_20 [i_7 + 3]) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)76)))))));
        var_32 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (17310235735925678241ULL)))) ? (((/* implicit */unsigned long long int) max((arr_21 [i_7] [i_7]), (((/* implicit */long long int) (unsigned char)194))))) : (((((/* implicit */_Bool) var_7)) ? (0ULL) : (17304129592230405946ULL))))), (((12813857468057250719ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76)))))));
    }
}
