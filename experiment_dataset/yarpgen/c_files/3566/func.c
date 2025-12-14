/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3566
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2199023239168ULL)) ? (6168652731112743060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3712)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_9) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_6 [i_1 + 1]) : (var_15)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2147483647)) : (-7270521307354551360LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (3682523771349880833ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1744321856U)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (_Bool)0))))) : (((var_7) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) ((arr_8 [(unsigned short)11] [i_1 - 1] [i_0] [i_0]) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_14))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (3364526453U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)448)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_16 [i_2] [i_3] [i_2] [i_1] [(unsigned short)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1441609984U)) ? (((/* implicit */unsigned int) var_9)) : (var_11)))) : (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) 306623718))))));
                            arr_17 [i_4] [i_3] [i_1 - 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294959104U)) ? (var_17) : (17112760320LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-17839154) : (((/* implicit */int) arr_2 [(unsigned short)1]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_12 [i_0] [i_1] [4U] [4U] [i_1]) : (((/* implicit */unsigned long long int) 1028876394))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_3] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (30ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (-1672449875) : (1012582060))) : (((((/* implicit */_Bool) 3650736779809518499ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)42037)))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_12)) : (arr_5 [i_0] [i_1 - 2] [i_2])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (3970038758U) : (((/* implicit */unsigned int) -2030025916))))) : (((((/* implicit */_Bool) 3636828841U)) ? (((/* implicit */unsigned long long int) -880468998)) : (10932390866815549158ULL)))));
                            arr_22 [i_5] [6] [12ULL] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5416)) ? (var_6) : (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_5])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))));
                        }
                        arr_23 [i_0] [i_1] [7U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1364156608U) : (1048575U)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (arr_4 [i_3]))) : (((((/* implicit */_Bool) 495379098U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5054783358661033467LL)))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50427)) ? (((/* implicit */unsigned long long int) 1186650889U)) : (3485859830577985811ULL)))) ? (((((/* implicit */_Bool) 1185989975)) ? (((/* implicit */unsigned long long int) -257158186197371004LL)) : (var_18))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1774432256966507826LL)) ? (((/* implicit */unsigned int) 2037764373)) : (2313411749U))))));
                        arr_24 [i_0] [i_1 - 2] [i_2] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843008139952128ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (arr_13 [i_0] [i_2] [i_2] [i_1 - 1] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) : (arr_10 [i_3] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) -162216263860782632LL)) ? (-4206097007098503264LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
}
