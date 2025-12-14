/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246289
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 *= max((max((((((/* implicit */_Bool) 8053091333400216167ULL)) ? (14792710815827363063ULL) : (((/* implicit */unsigned long long int) arr_10 [(unsigned char)7] [(unsigned char)1] [i_2] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (111723455U) : (((/* implicit */unsigned int) arr_9 [8ULL] [i_1]))))))), (((/* implicit */unsigned long long int) arr_3 [i_0 - 3])));
                            arr_13 [i_0] [7ULL] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_11 [i_2] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) -6945891520340705364LL)), (14792710815827363063ULL))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) / (-8704953270557814679LL))) & (((/* implicit */long long int) arr_0 [i_1 + 2] [i_0 - 2])))))));
                            var_19 = min((((/* implicit */unsigned long long int) (!(((3654033257882188552ULL) > (((/* implicit */unsigned long long int) 0))))))), (((3654033257882188553ULL) << (((((3654033257882188553ULL) + (2251799780130816ULL))) - (3656285057662319308ULL))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_1 + 1])) * (14792710815827363068ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (arr_0 [i_0 + 1] [i_1 + 2])))))))));
                arr_14 [i_0] = ((/* implicit */int) var_14);
            }
        } 
    } 
    var_21 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) 111723455U)) | (((14792710815827363050ULL) >> (((/* implicit */int) (_Bool)1))))))));
}
