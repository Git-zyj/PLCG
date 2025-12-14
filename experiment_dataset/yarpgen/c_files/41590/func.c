/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41590
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
    var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((-895738444), (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) var_6))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) / (((((/* implicit */int) (unsigned char)47)) % (((/* implicit */int) (unsigned short)8160)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_2 [i_0] = (signed char)(-127 - 1);
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57390)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((-2040170726927267671LL) > (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2634649823081694103ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)88)) ^ (((/* implicit */int) var_2))))) : (var_10)));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2834835915U)) < (-1LL))))) < (1460131380U))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57398)) ? (((/* implicit */int) (unsigned short)5064)) : (((/* implicit */int) (unsigned short)60472))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57376)))) : (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57390))) - (304165543461971771ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))))))))))));
        var_20 = ((/* implicit */short) var_3);
        var_21 &= ((/* implicit */int) (unsigned short)64192);
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [8] [i_4] [i_2] = ((/* implicit */int) (unsigned short)57934);
                    var_22 = ((/* implicit */unsigned long long int) ((arr_10 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                    arr_14 [i_3 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 += ((/* implicit */unsigned long long int) arr_17 [(unsigned char)14]);
            /* LoopNest 3 */
            for (unsigned short i_7 = 4; i_7 < 21; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            arr_28 [i_9 + 1] [i_8] [15ULL] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_24 [0] [0] [i_6] [i_7 + 1] [i_9 + 1])))));
                            arr_29 [i_9] [i_8] [i_7 + 3] [i_6] [i_6] [i_5] = ((/* implicit */short) (!(var_11)));
                            var_24 = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_8] [i_6])))))));
                            arr_30 [i_5] [i_5] [i_7 + 2] [i_8] [i_9] &= ((/* implicit */unsigned int) max((((unsigned long long int) ((arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned short)60321)))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_5] = ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned short)1344)));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5])))))) == (((((/* implicit */long long int) 1667260050U)) ^ (-5069772535832093581LL))))), ((!(((/* implicit */_Bool) var_5)))))))));
    }
    var_26 = (_Bool)0;
    var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), ((-(var_6)))));
}
