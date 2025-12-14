/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29265
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
    var_10 &= ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [14U])))))));
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_0] [16] [i_3]))) ? (((arr_4 [12LL] [i_1] [(unsigned short)2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) : (var_5)))) | (((((/* implicit */_Bool) (unsigned short)49505)) ? (((/* implicit */unsigned long long int) max((758863169U), (3536104101U)))) : (max((((/* implicit */unsigned long long int) 3536104152U)), (3374716197529900146ULL)))))));
                        var_13 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0]))))), (min((((/* implicit */unsigned long long int) (unsigned char)209)), (18446744073709551605ULL))))), (((/* implicit */unsigned long long int) var_3))));
                        var_14 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15072027876179651459ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58501))) : (1912479761U)))) : (((((/* implicit */_Bool) 67108800U)) ? (15072027876179651470ULL) : (((/* implicit */unsigned long long int) 3586730767U)))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((2872279756U), (((/* implicit */unsigned int) arr_3 [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3536104152U)))) : (max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (arr_0 [9LL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_0)), (arr_8 [i_0] [i_1] [i_0] [i_1])));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((var_2), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) < ((((_Bool)1) ? (((/* implicit */long long int) 1737349120)) : (-5920905685836784785LL)))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_0))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10291))) & (((unsigned int) min((((/* implicit */short) var_3)), (arr_12 [i_0] [i_1] [i_4] [i_4]))))));
                        var_17 = ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)65526)))) ? (((/* implicit */int) (unsigned short)5894)) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)14336)) : (-229578384)))));
                        var_18 = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((arr_2 [i_0] [i_1] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_5]))))), (((/* implicit */long long int) ((_Bool) arr_1 [i_0])))))) ? ((-(arr_11 [i_2] [i_2] [i_2 + 2] [i_2] [(unsigned short)1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))));
                        arr_16 [(_Bool)1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) -1737349121);
                        var_20 = ((/* implicit */_Bool) arr_6 [16LL]);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (21ULL)));
    var_22 = ((/* implicit */_Bool) ((((_Bool) ((unsigned int) (unsigned char)255))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 7637899235682697192ULL)) ? (16273389396786836128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43298))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_6))))))))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((min((min((var_5), (((/* implicit */unsigned int) (unsigned short)21313)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_8)))))), (((/* implicit */unsigned int) var_7)))))));
}
