/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222328
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1434599112651184517LL)) && (((/* implicit */_Bool) 2147483647)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [6])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (-3747020724428031245LL))) != (var_4)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9169618357933314074LL)) ? (((/* implicit */int) arr_2 [i_0] [(signed char)9])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : (((97198019) & (((/* implicit */int) var_8)))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [3LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) / (-1370384643)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_8 [i_1] [i_2] [7]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (arr_10 [(unsigned char)6] [i_1] [(unsigned char)1] [i_3]))))))) : (((/* implicit */int) ((max((68645995216420402LL), (arr_1 [5ULL] [(unsigned short)9]))) > (((/* implicit */long long int) ((/* implicit */int) var_19))))))));
                                arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] [6ULL] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_16))), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) 3732168717922293696ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (2020256962013653332ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (+(-1639471021896614285LL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [(_Bool)1] = ((/* implicit */signed char) ((((((((/* implicit */long long int) 66584576)) == (var_2))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_14))))) : (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (unsigned short)65535)) : (var_5))))) >> (((/* implicit */int) (unsigned char)0))));
    }
}
