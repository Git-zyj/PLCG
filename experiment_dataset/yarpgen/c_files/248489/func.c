/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248489
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
    var_14 = ((/* implicit */signed char) max((-1726338234445815377LL), (((/* implicit */long long int) ((signed char) var_4)))));
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-1726338234445815382LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) / ((+(1726338234445815392LL))))) : (1726338234445815376LL)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1726338234445815377LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (769988095U))) ^ (((unsigned int) max((((/* implicit */long long int) 1411811477)), (arr_1 [(signed char)2]))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)38276)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) == (arr_2 [i_0])))))));
        var_19 = (!(((/* implicit */_Bool) arr_3 [i_0])));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (max((18091483131307102554ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) : (3601050261474430637ULL))) : (min((((((/* implicit */unsigned long long int) arr_1 [i_0])) | (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_12))))))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = (-((~(((/* implicit */int) arr_0 [i_1 - 2] [i_1])))));
                    arr_10 [i_0] [3U] [9U] = ((/* implicit */unsigned short) var_4);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_7 [i_1] [i_1] [2] [i_1])));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)127)));
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_3] [(unsigned char)2] [i_3]), (arr_5 [i_3] [2] [i_3])))) ? (((/* implicit */int) ((signed char) -1726338234445815382LL))) : (min((arr_5 [i_3] [(short)4] [i_3]), (arr_5 [i_3] [2] [2LL])))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) arr_11 [(unsigned short)1]);
        arr_15 [i_3] [i_3] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-12)))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_22 = arr_11 [(signed char)5];
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) arr_12 [i_4] [i_4]);
    }
}
