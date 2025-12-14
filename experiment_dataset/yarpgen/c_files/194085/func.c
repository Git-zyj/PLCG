/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194085
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-18794), (((/* implicit */short) ((signed char) var_1))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((int) (unsigned char)20))) : (((((/* implicit */_Bool) (short)18737)) ? (var_4) : (-1152921504606846976LL)))))));
        var_18 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 282381889U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (8276832692013800902LL)))) ? (max((1108391361U), (((/* implicit */unsigned int) (unsigned short)40813)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)14)) >> (((((/* implicit */int) (short)-18798)) + (18811)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 &= ((/* implicit */int) (((~(max((174314589U), (((/* implicit */unsigned int) (signed char)-38)))))) | (min((3525370960U), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_8 [i_1] &= ((/* implicit */short) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) 2758174609719082568LL))))), (min(((unsigned short)40813), (var_13)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_2] [18ULL] [18ULL] [i_0] &= ((/* implicit */unsigned int) max((((unsigned long long int) 0LL)), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)53807)) ? (-681455970) : (((/* implicit */int) (signed char)-63)))), (((/* implicit */int) (unsigned char)104)))))));
                                arr_15 [i_0] [(signed char)6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) 1108391361U)) ? (-4258476104275751208LL) : (-2503373700560861843LL)))));
                                var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)61494)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)33791)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */long long int) 268435452))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)4047)))) - (55652)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned short)44536)) ? (10007972084347287037ULL) : (((/* implicit */unsigned long long int) 2738121458U)))), (((/* implicit */unsigned long long int) (unsigned short)56602)))), (((/* implicit */unsigned long long int) var_9))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((unsigned char) (signed char)-127));
    }
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_4), (-2926348643883531484LL)))) ? (6495468254035293626LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1152921504606846976ULL)) ? (279762265U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20302)))))))) / ((-(min((var_4), (var_3))))))))));
                arr_21 [9] [i_5] [(short)7] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) ((short) (unsigned short)57202))), (var_7)))));
            }
        } 
    } 
    var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)11941)), (var_10))), (((/* implicit */unsigned int) var_16)))))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60425)) ? (var_2) : (((/* implicit */unsigned long long int) -1952422900))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 16383U)) || (((/* implicit */_Bool) -248366969995838126LL))))) : (((((/* implicit */_Bool) 2669237806U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) (signed char)48)) : (var_16))))));
}
