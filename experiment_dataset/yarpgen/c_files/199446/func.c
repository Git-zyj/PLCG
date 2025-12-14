/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199446
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)96)) & (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45419))) : (3023917086U)))))));
    var_16 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((var_13) >> (((min((((/* implicit */unsigned int) var_9)), (var_13))) - (75U))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [19ULL] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_17 = ((/* implicit */unsigned int) (~(((804120068882705492ULL) | (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] [11ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_4] [i_1]) > (((/* implicit */unsigned long long int) arr_3 [i_0] [i_4]))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5668919515444925129ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_4]))) : (arr_5 [i_0] [i_0] [i_0])))) ? ((((_Bool)1) ? (arr_1 [i_4]) : (((/* implicit */long long int) 3623307296U)))) : (arr_1 [i_2]));
                            arr_14 [i_1] [i_1] [i_1] [i_3] [(unsigned short)6] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2066427987))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(12777824558264626497ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_2 [i_0] [i_1]))))), (((((/* implicit */_Bool) 12764889632441249201ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (4349432650349444546LL)))))));
                            var_19 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)22591))));
                            var_20 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6253961936019200544LL)) || (((/* implicit */_Bool) 12764889632441249216ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_0]))) : ((-(arr_6 [i_3])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 1] [i_6 - 1] [i_3] [i_2])) ? (((((/* implicit */int) (unsigned short)53342)) | (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (var_10) : (((/* implicit */int) (unsigned char)150)))));
                        }
                        var_22 = min((max((((12777824558264626486ULL) | (4971064835182740246ULL))), (((/* implicit */unsigned long long int) (unsigned short)42926)))), (min((((/* implicit */unsigned long long int) 1035955774)), (14823289926684199188ULL))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_13);
}
