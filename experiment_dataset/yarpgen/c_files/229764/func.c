/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229764
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -657653792)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)0])))))))) & (((((/* implicit */_Bool) max((-1402594310), (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) min((657653777), (657653798)))) : (max((-8131916966321366833LL), (((/* implicit */long long int) var_3))))))));
                arr_5 [7ULL] [i_0] [3ULL] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 10087894915849924402ULL)) ? (arr_3 [i_0] [i_0]) : (var_6))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_0] [i_0])), (-657653786))))))), (min((((/* implicit */unsigned long long int) 657653798)), (((((/* implicit */_Bool) -8131916966321366834LL)) ? (4647736266948435604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_0])) / (((/* implicit */int) (short)-15093))))) * (max((((/* implicit */long long int) var_3)), (3628106960344279758LL)))))) ? (((/* implicit */unsigned long long int) ((((arr_4 [i_0] [i_1 - 3] [i_0]) >> (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))))))) : (min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (4647736266948435609ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 657653792)) ? (((/* implicit */unsigned int) 657653822)) : (arr_4 [i_0] [i_0] [i_0]))))))));
                arr_6 [(signed char)8] |= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)8] [i_1])) && (((/* implicit */_Bool) (unsigned char)201))))), (min((((/* implicit */unsigned long long int) var_9)), (var_2))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned long long int) var_0)), (arr_0 [(unsigned char)8])))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)106)), (var_7)))) ? (((var_2) ^ (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((657653799), (340664788))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-11420)), (2620597763U)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (var_7)))) ? (((((/* implicit */_Bool) 480139557U)) ? (((/* implicit */unsigned long long int) 657653787)) : (10087894915849924402ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1215876468)) ? (-657653787) : (-657653800))))))));
}
